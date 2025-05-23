@class NSString, ICLibraryAuthServiceClientTokenResult;

@interface ICLibraryAuthServiceClientTokenResponse : NSObject <NSCopying>

@property (readonly, nonatomic) int resultCode;
@property (readonly, copy, nonatomic) NSString *serverHostName;
@property (readonly, nonatomic) long long serverInstance;
@property (nonatomic, getter=isSuccess) BOOL success;
@property (readonly, copy, nonatomic) ICLibraryAuthServiceClientTokenResult *tokenResult;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithResultCode:(int)a0;
- (id)initWithResponseDictionary:(id)a0;

@end
