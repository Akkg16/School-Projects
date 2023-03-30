for(i=0;i<n/2;i++){
        if(i==0) printf("\nPierwsza polowa glownej tablicy = {%d,",xMin[i]);
        if(i>0&&i<(n/2)-1) printf("%d,",xMin[i]);
        if(i==(n/2)-1) printf("%d}",xMin[i]);
    }