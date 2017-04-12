

int * getCharList(Graph * g){
  int * charList = (int *)malloc(g->n * sizeof(int));
  int i, j;
  for(i = 0; i < g->n; i++){
    int reds = 0;
    for(j = 0; j < g->n; j++){
      if(getEdgeColor(g, i, j) == RED){
        reds++;
      }
    }
    *(charList + i) = reds;
  }
}

void printGraph(Graph * g){
  

}

Color * createKn(int numVertices) {
  int maxVertices = numVertices * (numVertices - 1) / 2;
  Color * Kn = (Color *) malloc(maxVertices * sizeof(Color));
  int edgeCount;
	
    for (edgeCount = 0; edgeCount < maxVertices; edgeCount++) {
      *(Kn + edgeCount) = RED;
    }
	
    return Kn;
}

Color getEdgeColor(Graph * g, int n, int m){
  if( n == m ) {
    return NONE;
  }else if (n > m){
    int base = n*(n-1)/2;
    return *(g->edges + base + m);
  }else{
    int base = m*(m-1)/2;
    return *(g->edges + base + n);
  }
}
