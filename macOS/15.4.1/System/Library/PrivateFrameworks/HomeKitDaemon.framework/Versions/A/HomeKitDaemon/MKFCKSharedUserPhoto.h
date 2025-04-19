@class NSValue, NSData, MKFCKSharedUserDataRoot;

@interface MKFCKSharedUserPhoto : MKFCKSharedUserData

@property (retain, nonatomic) NSValue *cropRect;
@property (retain, nonatomic) NSData *photoData;
@property (retain, nonatomic) MKFCKSharedUserDataRoot *root;

+ (id)fetchRequest;

@end
