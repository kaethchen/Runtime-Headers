@class NSString;
@protocol CPProfileMissingFieldHelperProtocol;

@interface CPProfileMissingFieldHelper : NSObject <CPProfileMissingFieldHelperProtocol> {
    id<CPProfileMissingFieldHelperProtocol> fImpl;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)helperForPayload:(id)a0 forProfile:(id)a1 intoResults:(id)a2;

- (void)dealloc;
- (id)initWithImpl:(id)a0;
- (void)addMissingField:(id)a0 forKey:(id)a1 isRequired:(BOOL)a2 useSecureEntry:(BOOL)a3;
- (void)addMissingField:(id)a0 forKey:(id)a1 isRequired:(BOOL)a2 useSecureEntry:(BOOL)a3 options:(id)a4;
- (id)initForPayload:(id)a0 forProfile:(id)a1 intoResults:(id)a2;
- (BOOL)isKeyMissing:(id)a0;
- (void)setPayloadHeader:(id)a0;
- (void)setPayloadIconImagePath:(id)a0 title:(id)a1;
- (void)setTopPrompt:(id)a0;
- (void)startSection:(id)a0;

@end
