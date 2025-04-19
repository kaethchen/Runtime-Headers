@class NSString, NSDictionary, NSURL, NSObject, ML3MusicLibrary;
@protocol OS_dispatch_queue;

@interface ML3Artwork : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (readonly, nonatomic) ML3MusicLibrary *musicLibrary;
@property (readonly, nonatomic) NSString *artworkToken;
@property (readonly, nonatomic) long long artworkType;
@property (readonly, nonatomic) long long sourceType;
@property (readonly, nonatomic) long long variantType;
@property (readonly, nonatomic) NSString *relativePath;
@property (retain, nonatomic) NSDictionary *interestDictionary;
@property (readonly, nonatomic) NSURL *originalFileURL;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)fileURLForSize:(struct CGSize { double x0; double x1; })a0;
- (id)_interestDataFromInterestDictionary:(id)a0;
- (id)_interestDictionaryFromInterestData:(id)a0;
- (void)_onSerialQueue_faultInProperties;
- (id)fileURLForEffect:(id)a0;
- (id)initWithToken:(id)a0 artworkType:(long long)a1 musicLibrary:(id)a2;
- (id)initWithToken:(id)a0 artworkType:(long long)a1 variantType:(long long)a2 musicLibrary:(id)a3;
- (id)initWithToken:(id)a0 relativePath:(id)a1 artworkType:(long long)a2 musicLibrary:(id)a3;
- (id)initWithToken:(id)a0 relativePath:(id)a1 artworkType:(long long)a2 variantType:(long long)a3 musicLibrary:(id)a4;

@end
