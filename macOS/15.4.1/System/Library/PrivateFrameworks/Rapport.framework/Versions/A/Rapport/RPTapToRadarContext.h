@class NSDictionary;

@interface RPTapToRadarContext : NSObject {
    NSDictionary *_rawContext;
}

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)_isValidClassification:(id)a0;
- (BOOL)_isValidReproducibility:(id)a0;
- (id)getTapToRadarURL;
- (id)initWithTitle:(id)a0 problemDescription:(id)a1;

@end
