#include "Graph.h"

/*
 * Contructors and Destructors
 */

Graph::Graph(){

}

Graph::~Graph(){

}

/*
 * Methods
 */

/**
 * Adiciona o novo nodo ao grafo
 */
void Graph::addNode(gNode node){
	this->nodes.push_back(node);
}

/**
 * Verifica se aquele nodo j� est� introduzido no grafo
 * @return NULL caso n�o exista ou retorna o pr�prio nodo
 */
gNode* Graph::existNode(gNode node){

	return NULL;
}