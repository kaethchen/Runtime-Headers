@class NSString, SVXSpeechSynthesisUtils, SVXSpeechSynthesizer;

@interface SVXServiceCommandHandlerPreSynthesizeTTS : NSObject <SVXServiceCommandHandling> {
    SVXSpeechSynthesizer *_speechSynthesizer;
    SVXSpeechSynthesisUtils *_speechSynthesisUtils;
}

@property (class, readonly, nonatomic) Class supportedCommandClass;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
