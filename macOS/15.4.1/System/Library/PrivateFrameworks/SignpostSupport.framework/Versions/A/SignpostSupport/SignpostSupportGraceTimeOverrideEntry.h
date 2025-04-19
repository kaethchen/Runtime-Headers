@class NSMutableDictionary, SignpostSupportAnimationGraceTime;

@interface SignpostSupportGraceTimeOverrideEntry : NSObject

@property (readonly, nonatomic) NSMutableDictionary *overrides;
@property (readonly) unsigned long long entryLevel;
@property (retain, nonatomic) SignpostSupportAnimationGraceTime *defaultGraceTime;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)debugDescriptionWithWhitespacePrefix:(id)a0;
- (id)initWithEntryLevel:(unsigned long long)a0;

@end
