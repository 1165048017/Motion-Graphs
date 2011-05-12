#ifndef _MOTIONGRAPH
#define _MOTIONGRAPH

#include "Graph.h"
#include "stdafx.h"
#include <OgreEntity.h>



class MotionGraph{
	public:
		MotionGraph();
		~MotionGraph();

		void setMeshName(std::string name){this->meshName = name;}
		void setSceneName(std::string name){this->sceneName = name;}
		void setEntityName(std::string name){this->entityName = name;}
		void setEntity(Ogre::Entity *e){this->entity = e;}

		std::string getMeshName(){return this->meshName;}
		std::string getSceneName(){return this->sceneName;}
		std::string getEntityName(){return this->entityName;}
		Ogre::Entity *getEntity(){return this->entity;}

		Ogre::SkeletonInstance *getSkeleton(){return this->entity->getSkeleton();}
		Ogre::AnimationStateSet *getAnimationStates(){return this->entity->getAllAnimationStates();}
		Ogre::AnimationState *getAnimationState(std::string name){return this->entity->getAnimationState(name);}
		
		void insertMotion(Motion *motion);
		Motion *getMotion(std::string name);

		void constructGraph(float threshold, int nCoincidents);

	private:
		Graph *graph;
		std::string meshName;
		std::string sceneName;
		std::string entityName;
		
		Ogre::Entity *entity;
		//SkeletonInstance *skeleton;

		int animCount;
		std::vector<std::string> animNames;
		//AnimationStateSet* _anims;

		Ninja motions;
};

#endif