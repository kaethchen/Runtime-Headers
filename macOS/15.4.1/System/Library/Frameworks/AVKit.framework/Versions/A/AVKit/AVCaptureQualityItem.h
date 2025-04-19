@class NSString, NSDictionary;

@interface AVCaptureQualityItem : NSObject {
    NSString *_localizedName;
    NSDictionary *_options;
}

@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *localizedName;
@property (readonly, copy) NSString *sessionPreset;

- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (BOOL)applyToSession:(id)a0;
- (id)initWithSessionPreset:(id)a0 localizedName:(id)a1;

@end
