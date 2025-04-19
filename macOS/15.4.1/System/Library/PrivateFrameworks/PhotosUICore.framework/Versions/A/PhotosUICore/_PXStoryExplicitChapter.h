@class NSString, NSSet, NSObject;
@protocol NSCopying;

@interface _PXStoryExplicitChapter : NSObject <PXStoryChapter, PXStoryMutableChapter> {
    NSString *_localizedTitle;
    NSString *_localizedSubtitle;
}

@property (readonly, nonatomic) NSString *firstAssetUUID;
@property (readonly, nonatomic) NSSet *assetUUIDs;
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSString *localizedSubtitle;
@property (readonly, nonatomic) NSString *diagnosticDescription;

- (void).cxx_destruct;
- (void)setLocalizedTitle:(id)a0;
- (void)setLocalizedSubtitle:(id)a0;
- (id)initWithFirstAssetUUID:(id)a0 assetUUIDs:(id)a1;

@end
