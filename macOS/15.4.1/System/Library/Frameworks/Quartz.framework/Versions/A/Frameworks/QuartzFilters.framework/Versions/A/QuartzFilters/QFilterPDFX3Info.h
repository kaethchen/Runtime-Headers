@class QSizeObject, NSString, QRectObject, NSNumber;

@interface QFilterPDFX3Info : NSObject <NSCopying>

@property BOOL addTrimBox;
@property BOOL addBleedBox;
@property (getter=isTrapped) BOOL trapped;
@property BOOL flattenTransparency;
@property (retain) QRectObject *trimBox;
@property (retain) QRectObject *bleedBox;
@property (retain) QSizeObject *transparencyResolution;
@property (copy) NSString *outConditionID;
@property (copy) NSString *outCondition;
@property (copy) NSString *outConditionInfo;
@property (copy) NSString *registryName;
@property (copy) NSNumber *destProfile;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)reset;

@end
