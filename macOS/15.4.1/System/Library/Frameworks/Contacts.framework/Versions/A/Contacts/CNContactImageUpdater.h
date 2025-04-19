@class CNContactStore, CNMutableContact;

@interface CNContactImageUpdater : NSObject

@property (retain, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) CNMutableContact *contact;

+ (id)descriptorForRequiredKeys;
+ (id)log;
+ (void)updateMutableContact:(id)a0 withImageAndWallpaperPropertiesFromContact:(id)a1;
+ (void)updateMutableContact:(id)a0 withImagePropertiesFromContact:(id)a1;
+ (void)updateMutableContact:(id)a0 withWallpaperPropertiesFromContact:(id)a1;

- (void).cxx_destruct;
- (id)initWithContact:(id)a0 contactStore:(id)a1;
- (BOOL)updateImageWithImageContact:(id)a0 setAsMe:(BOOL)a1;

@end
