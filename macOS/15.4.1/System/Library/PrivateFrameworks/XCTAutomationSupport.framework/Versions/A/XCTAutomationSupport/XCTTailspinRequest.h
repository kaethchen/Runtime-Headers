@class NSString, NSDate;

@interface XCTTailspinRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int processID;
@property (readonly, nonatomic) BOOL collectOSLogs;
@property (readonly, nonatomic) BOOL collectOSSignposts;
@property (readonly, nonatomic) BOOL redactSensitiveInformation;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, copy, nonatomic) NSString *fileName;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProcessID:(int)a0 collectOSLogs:(BOOL)a1 collectOSSignposts:(BOOL)a2 redactSensitiveInformation:(BOOL)a3 startDate:(id)a4 reason:(id)a5 fileName:(id)a6;

@end
