@class NSString, NSSecurityScopedURLWrapper, NSDate, STMIconConstructor;

@interface STMRowItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSSecurityScopedURLWrapper *fileURLWrapper;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *sectionName;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *category;
@property (retain, nonatomic) NSDate *dateLastOpened;
@property (nonatomic) long long size;
@property (nonatomic) long long appSize;
@property (nonatomic) long long dataSize;
@property (nonatomic) long long deletableSize;
@property (copy, nonatomic) NSString *bundleID;
@property (nonatomic) BOOL hasViewedState;
@property (nonatomic) BOOL hasBeenViewed;
@property (nonatomic) double percentViewed;
@property (nonatomic) BOOL isDeletable;
@property (copy, nonatomic) NSString *localizedCategoryShortName;
@property (retain, nonatomic) STMIconConstructor *iconConstructor;
@property (retain, nonatomic) NSString *revealButtonTitle;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
