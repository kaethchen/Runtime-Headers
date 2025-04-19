@class NSString;

@interface ASDTIOPAudioVTOccurredProperty : ASDTIOPAudioVTProperty <ASDTConcreteCustomProperty>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configDictForService:(id)a0;

- (id)initWithConfig:(id)a0;
- (void)phraseDetectEvent;

@end
