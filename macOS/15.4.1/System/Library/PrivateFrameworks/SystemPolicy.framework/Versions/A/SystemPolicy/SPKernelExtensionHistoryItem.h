@class NSString, NSDate;

@interface SPKernelExtensionHistoryItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSString *teamID;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *cdHash;
@property (readonly, nonatomic) BOOL isNotarized;
@property (readonly, nonatomic) BOOL isDeprecated;
@property (readonly, nonatomic) BOOL isUnsupported;
@property (readonly, nonatomic) BOOL isCodeless;
@property (readonly, nonatomic) NSDate *lastUsed;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPath:(id)a0 teamID:(id)a1 bundleID:(id)a2 cdHash:(id)a3 isNotarized:(BOOL)a4 isDeprecated:(BOOL)a5 isUnsupported:(BOOL)a6 isCodeless:(BOOL)a7 lastUsed:(id)a8;

@end
