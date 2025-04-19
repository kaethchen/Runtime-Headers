@class NSArray, NSString;

@interface PXStoryExportOrientation : NSObject <NSCopying>

@property (class, readonly, nonatomic) NSArray *pickableOrientations;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSString *localizedTitle;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithOrientationType:(long long)a0;
- (id)initWithUserInterfaceOrientation:(long long)a0;

@end
