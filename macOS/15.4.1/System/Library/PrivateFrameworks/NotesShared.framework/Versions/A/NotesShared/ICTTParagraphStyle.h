@class ICTTTodo, NSUUID, NSString;

@interface ICTTParagraphStyle : NSObject <NSSecureCoding, NSCopying, NSMutableCopying, ICTTModelAttributeComparable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int style;
@property (nonatomic) long long alignment;
@property (nonatomic) long long writingDirection;
@property (nonatomic) unsigned long long indent;
@property (nonatomic) unsigned long long blockQuoteLevel;
@property (nonatomic) unsigned long long startingItemNumber;
@property (retain, nonatomic) ICTTTodo *todo;
@property (nonatomic) unsigned int hints;
@property (nonatomic) BOOL needsParagraphCleanup;
@property (nonatomic) BOOL needsListCleanup;
@property (copy, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) BOOL canIndent;
@property (readonly, nonatomic) BOOL isList;
@property (readonly, nonatomic) BOOL isBlockQuote;
@property (readonly, nonatomic) BOOL isRTL;
@property (readonly, nonatomic) BOOL isHeader;
@property (readonly, nonatomic) BOOL uniqueToLine;
@property (readonly, nonatomic) BOOL preferSingleLine;
@property (readonly, nonatomic) BOOL wantsFollowingNewLine;
@property (readonly, nonatomic) NSUUID *todoTrackingUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultParagraphStyle;
+ (int)paragraphStyleAlignmentForTextAlignment:(long long)a0;
+ (id)paragraphStyleNamed:(unsigned int)a0;
+ (long long)textAlignmentForParagraphStyleAlignment:(int)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)serialize;
- (id)initWithArchive:(const void *)a0;
- (BOOL)isEqualToModelComparable:(id)a0;
- (BOOL)isEqualToModelParagraphStyle:(id)a0;
- (BOOL)isEqualToParagraphStyle:(id)a0;
- (BOOL)isUnknownStyle;
- (id)listBulletInAttributedString:(id)a0 atIndex:(unsigned long long)a1;
- (void)saveToArchive:(void *)a0;
- (BOOL)isHierarchicallyEqualToParagraphStyle:(id)a0;

@end
