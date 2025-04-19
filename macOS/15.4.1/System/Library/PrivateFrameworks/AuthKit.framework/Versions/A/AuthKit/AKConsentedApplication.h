@class NSArray, NSString, AKAppiTunesMetadata, NSDate;

@interface AKConsentedApplication : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *scopes;
@property (copy, nonatomic) NSString *clientID;
@property (copy, nonatomic) NSString *clientName;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSString *transferState;
@property (retain, nonatomic) NSString *primaryClientID;
@property (retain, nonatomic) NSString *origin;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) AKAppiTunesMetadata *appiTunesMetadata;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithResponseInfo:(id)a0;

@end
