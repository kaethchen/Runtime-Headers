@class NSString;

@interface BMCameraCaptureAutoFocusROI : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *portType;
@property (readonly, nonatomic) int focusRegionType;
@property (readonly, nonatomic) unsigned int topLeftCornerRow;
@property (nonatomic) BOOL hasTopLeftCornerRow;
@property (readonly, nonatomic) unsigned int topLeftCornerColumn;
@property (nonatomic) BOOL hasTopLeftCornerColumn;
@property (readonly, nonatomic) unsigned int width;
@property (nonatomic) BOOL hasWidth;
@property (readonly, nonatomic) unsigned int height;
@property (nonatomic) BOOL hasHeight;
@property (readonly, nonatomic) unsigned int luxLevel;
@property (nonatomic) BOOL hasLuxLevel;
@property (readonly, nonatomic) double subjectDistance;
@property (nonatomic) BOOL hasSubjectDistance;
@property (readonly, nonatomic) int clientApplicationIDType;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)columns;
+ (id)validKeyPaths;
+ (id)protoFields;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initWithPortType:(id)a0 focusRegionType:(int)a1 topLeftCornerRow:(id)a2 topLeftCornerColumn:(id)a3 width:(id)a4 height:(id)a5 luxLevel:(id)a6 subjectDistance:(id)a7 clientApplicationIDType:(int)a8;
- (id)initByReadFrom:(id)a0;

@end
