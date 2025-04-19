@class NSString, NSDictionary;

@interface LAErrorOysterRedactor : NSObject <LAErrorRedacting> {
    NSDictionary *_defaults;
    struct { unsigned int platform; unsigned int version; } _minSDKVersion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)setDefaults:(id)a0;
- (id)redactError:(id)a0;
- (void)setMinSDKVersion:(struct { unsigned int x0; unsigned int x1; })a0;

@end
