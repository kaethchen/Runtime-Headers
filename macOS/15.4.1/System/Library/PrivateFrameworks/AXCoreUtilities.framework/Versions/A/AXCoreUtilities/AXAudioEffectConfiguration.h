@class NSString, NSDictionary;

@interface AXAudioEffectConfiguration : NSObject {
    void /* unknown type, empty encoding */ effectName;
    void /* unknown type, empty encoding */ properties;
    void /* unknown type, empty encoding */ parameters;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ identifier;
@property (nonatomic, copy) NSString *effectName;
@property (nonatomic) void /* unknown type, empty encoding */ enabled;
@property (nonatomic, copy) NSDictionary *properties;
@property (nonatomic, copy) NSDictionary *parameters;

- (void).cxx_destruct;

@end
