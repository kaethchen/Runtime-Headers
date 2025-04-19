@class FFFeatureSetIdentifier, NSArray;

@interface FFFeatureSet : NSObject

@property (readonly, nonatomic) FFFeatureSetIdentifier *identifier;
@property (retain, nonatomic) NSArray *features;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)initWithGroup:(id)a0 set:(id)a1;

@end
