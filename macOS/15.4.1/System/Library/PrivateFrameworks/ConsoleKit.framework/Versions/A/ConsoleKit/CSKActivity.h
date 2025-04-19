@class NSString, NSNumber;

@interface CSKActivity : CSKEntity <NSCopying> {
    unsigned long long _rawActivityIdentifier;
    NSString *_rawName;
    unsigned long long _rawParentActivityIdentifier;
    unsigned long long _rawCreatorActivityIdentifier;
    unsigned long long _rawCreatorProcessUniqueIdentifier;
    NSString *_name;
    NSNumber *_activityIdentifier;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSNumber *activityIdentifier;
@property (nonatomic, getter=isDetached) BOOL detached;
@property (copy, nonatomic) NSNumber *parentActivityIdentifier;

+ (id)propertyNameForFilter:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToActivity:(id)a0;
- (void)setRawName:(id)a0;
- (void)setRawParentActivityIdentifier:(unsigned long long)a0;
- (void)csk_configureTableCellView:(id)a0 withColumnIdentifier:(id)a1 tableView:(id)a2;
- (id)initForRaw;
- (id)initWithIdentifier:(id)a0 processImagePath:(id)a1 libraryImagePath:(id)a2 timestamp:(id)a3 timeZone:(id)a4 isVolatile:(BOOL)a5;
- (id)initWithIdentifier:(id)a0 processImagePath:(id)a1 libraryImagePath:(id)a2 timestamp:(id)a3 timeZone:(id)a4 isVolatile:(BOOL)a5 activityIdentifier:(id)a6 name:(id)a7;
- (void)setRawActivityIdentifier:(unsigned long long)a0;
- (void)setRawCreatorActivityIdentifier:(unsigned long long)a0;
- (void)setRawCreatorProcessUniqueIdentifier:(unsigned long long)a0;
- (id)stringDescriptionForIndexer;
- (unsigned long long)stringDescriptionLengthForIndexer;

@end
