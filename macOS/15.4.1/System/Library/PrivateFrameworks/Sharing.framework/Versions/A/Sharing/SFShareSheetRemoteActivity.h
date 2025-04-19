@class NSString, NSUUID;

@interface SFShareSheetRemoteActivity : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL isRTS;
@property (readonly, nonatomic) long long activitySourceType;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSUUID *uuid;

+ (id)activitySourceTypeToString:(long long)a0;
+ (id)builtinActivityWithUUID:(id)a0;
+ (id)sharingServiceWithIdentifier:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithActivitySourceType:(long long)a0 identifier:(id)a1 uuid:(id)a2;

@end
