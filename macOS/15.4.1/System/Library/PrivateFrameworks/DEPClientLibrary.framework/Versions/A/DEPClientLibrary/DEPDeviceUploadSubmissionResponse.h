@class NSString, NSArray;

@interface DEPDeviceUploadSubmissionResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *requestId;
@property (readonly, nonatomic) NSString *requestStatus;
@property (readonly, nonatomic) NSString *errorMessage;
@property (readonly, nonatomic) NSArray *devices;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDict:(id)a0;
- (id)_devicesFromDeviceArray:(id)a0;

@end
