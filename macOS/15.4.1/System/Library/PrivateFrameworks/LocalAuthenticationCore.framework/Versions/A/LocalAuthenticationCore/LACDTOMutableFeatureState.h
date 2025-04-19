@class NSString;
@protocol LACDTOFeatureRequirements;

@interface LACDTOMutableFeatureState : NSObject <LACDTOFeatureState>

@property (nonatomic) BOOL isSupported;
@property (nonatomic) BOOL isAvailable;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) BOOL isStrictModeEnabled;
@property (retain, nonatomic) id<LACDTOFeatureRequirements> requirements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nullInstance;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
