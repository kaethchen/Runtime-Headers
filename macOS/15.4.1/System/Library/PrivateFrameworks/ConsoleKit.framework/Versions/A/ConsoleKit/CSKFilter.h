@class NSString, NSNumber;

@interface CSKFilter : NSObject <NSCopying, NSSecureCoding, NSPasteboardWriting, NSPasteboardReading>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *value;
@property (retain, nonatomic) NSNumber *number;
@property (nonatomic) long long comparisonType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)readableTypesForPasteboard:(id)a0;
+ (unsigned long long)readingOptionsForType:(id)a0 pasteboard:(id)a1;
+ (id)localizedFilterTypeNameForType:(long long)a0;
+ (id)typeForLocalizedFilterTypeName:(id)a0;
+ (id)filterWithType:(long long)a0 value:(id)a1;
+ (id)filterWithType:(long long)a0 value:(id)a1 comparisonType:(long long)a2;
+ (id)localizedFilterComparisonTypeNameForComparisonType:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)pasteboardPropertyListForType:(id)a0;
- (id)writableTypesForPasteboard:(id)a0;
- (id)initWithType:(long long)a0 value:(id)a1;
- (BOOL)isEqualToFilter:(id)a0;
- (id)basicDescription;
- (id)initWithType:(long long)a0 value:(id)a1 comparisonType:(long long)a2;
- (id)localizedFilterTypeNameForCurrentType;

@end
