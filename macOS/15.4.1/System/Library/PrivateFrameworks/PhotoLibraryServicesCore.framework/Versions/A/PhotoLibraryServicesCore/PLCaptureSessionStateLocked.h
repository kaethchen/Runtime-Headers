@class NSString;

@interface PLCaptureSessionStateLocked : PLCaptureSessionState

@property (readonly, copy) NSString *sessionIdentifier;

- (id)description;
- (void).cxx_destruct;
- (id)initWithSessionIdentifier:(id)a0;

@end
