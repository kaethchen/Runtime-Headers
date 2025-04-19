@interface IMMapPreviewGenerator : IMContactCardPreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>

+ (id)UTITypes;
+ (struct CLLocationCoordinate2D { double x0; double x1; })_legacyCoordinateForvCardURL:(id)a0;
+ (struct CLLocationCoordinate2D { double x0; double x1; })coordinateForvCardURL:(id)a0 senderContext:(id)a1;
+ (id)mapSnapshotterQueue;
+ (struct CGSize { double x0; double x1; })mapThumbnailFillSizeForWidth:(double)a0;
+ (struct CGImage { } *)newPreviewFromSourceURL:(id)a0 senderContext:(id)a1 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; BOOL x5; })a2 error:(id *)a3;
+ (struct CGImage { } *)newPreviewFromSourceURL:(id)a0 senderContext:(id)a1 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; BOOL x5; })a2 interfaceStyle:(long long)a3 error:(id *)a4;
+ (BOOL)supportsBlastDoor;
+ (id)vCardDataForURL:(id)a0;
+ (id)vCardURLSForData:(id)a0;
+ (id)valueForKey:(id)a0 forURLComponents:(id)a1;
+ (BOOL)writesToDisk;

@end
