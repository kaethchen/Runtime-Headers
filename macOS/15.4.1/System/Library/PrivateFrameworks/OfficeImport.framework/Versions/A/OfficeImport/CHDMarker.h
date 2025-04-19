@class OADGraphicProperties;

@interface CHDMarker : NSObject {
    unsigned int mSize;
    int mStyle;
    OADGraphicProperties *mGraphicProperties;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)setSize:(unsigned int)a0;
- (int)style;
- (unsigned int)size;
- (void)setStyle:(int)a0;
- (id)graphicProperties;
- (void)setGraphicProperties:(id)a0;

@end
