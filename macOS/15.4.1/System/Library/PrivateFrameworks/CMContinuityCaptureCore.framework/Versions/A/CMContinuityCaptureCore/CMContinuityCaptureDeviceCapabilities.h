@class NSArray, NSString;

@interface CMContinuityCaptureDeviceCapabilities : NSObject <CMContinuityCaptureDictionaryRepresentable>

@property (readonly, nonatomic) long long entityType;
@property (readonly, nonatomic) NSArray *streamFormats;
@property (readonly, nonatomic) NSArray *manualFramingSupportedStreamFormats;
@property (readonly, nonatomic) NSArray *controls;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithEntityType:(long long)a0 streamFormats:(id)a1 manualFramingSupportedStreamFormats:(id)a2 controls:(id)a3;
- (BOOL)supportsControlWithName:(id)a0;

@end
