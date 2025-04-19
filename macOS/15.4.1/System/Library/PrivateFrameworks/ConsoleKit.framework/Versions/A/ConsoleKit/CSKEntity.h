@class NSTimeZone, NSString, NSDate, NSNumber;

@interface CSKEntity : NSObject <CSKStringsIndexerProtocol, CSKFilterMapping, CSKEntityPasteboardWritable, NSCopying> {
    unsigned long long _rawIdentifier;
    unsigned long long _rawThreadIdentifier;
    int _rawProcessIdentifier;
    NSString *_rawLibraryImagePath;
    NSString *_rawLibraryName;
    NSString *_rawProcessImagePath;
    NSString *_rawProcessName;
    NSNumber *_identifier;
    NSString *_libraryImagePath;
    NSString *_processImagePath;
}

@property (class, readonly) NSString *missingDescription;
@property (class, readonly) NSString *unknown;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *formattedTime;
@property (copy, nonatomic) NSString *formattedDateTime;
@property (copy, nonatomic) NSDate *timestamp;
@property (nonatomic) BOOL isVolatile;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (readonly, copy, nonatomic) NSNumber *identifier;
@property (readonly, copy, nonatomic) NSString *processImagePath;
@property (readonly, copy, nonatomic) NSString *libraryImagePath;
@property (copy, nonatomic) NSString *threadIdentifier;
@property (copy, nonatomic) NSString *processName;
@property (copy, nonatomic) NSString *libraryName;
@property (copy, nonatomic) NSString *libraryImageUUID;
@property (copy, nonatomic) NSNumber *processIdentifier;

+ (id)compareDatesOfEntityA:(id)a0 andEntityB:(id)a1 withComparisonResult:(long long)a2;
+ (id)csk_propertiesNameFromTableColumnIdentifiers:(id)a0;
+ (id)overridedFilterValueForFilter:(id)a0;
+ (id)propertyNameForFilter:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToEntity:(id)a0;
- (void)setRawIdentifier:(unsigned long long)a0;
- (void)csk_configureTableCellView:(id)a0 withColumnIdentifier:(id)a1 tableView:(id)a2;
- (id)initForRaw;
- (id)initWithIdentifier:(id)a0 processImagePath:(id)a1 libraryImagePath:(id)a2 timestamp:(id)a3 timeZone:(id)a4 isVolatile:(BOOL)a5;
- (id)pasteboardDescriptionForProperties:(id)a0;
- (id)processIdentifierThreadIdentifierString;
- (void)setRawLibraryImagePath:(id)a0;
- (void)setRawLibraryName:(id)a0;
- (void)setRawProcessIdentifier:(int)a0;
- (void)setRawProcessImagePath:(id)a0;
- (void)setRawProcessName:(id)a0;
- (void)setRawThreadIdentifier:(unsigned long long)a0;
- (id)stringDescriptionForIndexer;
- (unsigned long long)stringDescriptionLengthForIndexer;

@end
