@class NSString, NSDate;

@interface KTOptInState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long state;
@property BOOL everOptIn;
@property (retain) NSString *uri;
@property (retain) NSString *application;
@property (retain) NSDate *smtTimestamp;
@property (retain) NSString *osVersion;
@property (retain) NSString *serialNumber;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)jsonDescription;
- (id)initWithApplication:(id)a0;
- (id)initWithURI:(id)a0 application:(id)a1;

@end
