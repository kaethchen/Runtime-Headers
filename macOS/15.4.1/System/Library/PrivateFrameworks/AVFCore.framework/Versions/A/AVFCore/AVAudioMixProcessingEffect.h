@class NSString, NSDictionary, NSArray, NSMutableArray;

@interface AVAudioMixProcessingEffect : AVAudioMixEffect {
    NSString *_identifier;
    NSString *_graphText;
    NSMutableArray *_scheduleEntries;
    NSDictionary *_properties;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *DSPGraphText;
@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly, nonatomic) NSArray *parameterSchedule;

+ (id)processingEffectWithDSPGraphText:(id)a0 properties:(id)a1 parameterSchedule:(id)a2 identifier:(id)a3;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)_figAudioProperties;
- (id)_figIdentifier;
- (id)_figSchedule;
- (id)_fourCCToFigPropertyDict;
- (id)initWithDSPGraphText:(id)a0 properties:(id)a1 parameterSchedule:(id)a2 identifier:(id)a3;
- (BOOL)isValueSupported:(id)a0 exceptionReasonOut:(id *)a1;

@end
