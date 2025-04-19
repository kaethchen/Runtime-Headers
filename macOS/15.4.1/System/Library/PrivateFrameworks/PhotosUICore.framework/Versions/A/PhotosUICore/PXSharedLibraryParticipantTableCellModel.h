@class NSImage, NSString;

@interface PXSharedLibraryParticipantTableCellModel : PXObservable

@property (class, readonly) double imageDiameter;
@property (class, readonly) double imageVerticalInset;

@property (readonly, copy, nonatomic) NSImage *image;
@property (readonly, nonatomic) long long requestID;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *address;
@property (readonly, nonatomic) BOOL removeButtonVisible;
@property (readonly, nonatomic) BOOL ellipsisButtonAllowed;

+ (double)imageInset;

- (id)init;
- (void).cxx_destruct;
- (void)setName:(id)a0;
- (void)setImage:(id)a0;
- (void)setAddress:(id)a0;
- (void)setRequestID:(long long)a0;
- (void)configureForParticipant:(id)a0 displayScale:(double)a1 isRTL:(BOOL)a2;
- (void)setEllipsisButtonAllowed:(BOOL)a0;

@end
