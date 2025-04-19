@class NSString, NSDate;

@interface ICNoteTimelineSectionIdentifier : ICNoteSectionIdentifier

@property (nonatomic) long long timelineSectionType;
@property (copy, nonatomic) NSDate *referenceDate;
@property (copy, nonatomic) NSString *sectionTitle;
@property (nonatomic) unsigned long long sortOrder;

+ (id)sortDescriptorsWithDirection:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)title;
- (id)typeString;
- (id)initWithTimelineSectionType:(long long)a0 referenceDate:(id)a1 title:(id)a2 sortOrder:(unsigned long long)a3;
- (BOOL)isEqualToICNoteTimelineSectionIdentifier:(id)a0;

@end
