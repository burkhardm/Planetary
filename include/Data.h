/*
 *  Data.h
 *  Kepler
 *
 *  Created by Robert Hodgin on 2/25/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#pragma once 
#include <Foundation/NSAutoReleasePool.h>
#include "cinder/gl/Texture.h"
#include "CinderIPodPlayer.h"

class Data {
  public:
	Data();
    
    void setup();
	bool update(); // TODO: split into bool isInited() and void update() ?

	void filterArtistsByAlpha( char c );
	
	std::vector<ci::ipod::PlaylistRef> mArtists;
	std::vector<int> mFilteredArtists;
	std::map< char, float > mNumArtistsPerChar;
	
	GLfloat *mWheelDataVerts;
	GLfloat *mWheelDataTexCoords;
	GLfloat *mWheelDataColors;
	
  private:
	void backgroundInitArtists();
	void buildVertexArray();
	bool isIniting;
    bool wasIniting;
	std::vector<ci::ipod::PlaylistRef> pending;
	
	
};
