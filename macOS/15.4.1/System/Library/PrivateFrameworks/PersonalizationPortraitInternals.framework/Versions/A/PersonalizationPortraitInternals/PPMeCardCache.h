@class NSString;

@interface PPMeCardCache : NSObject {
    NSString *_path;
}

- (id)init;
- (void).cxx_destruct;
- (id)loadMeCardCache;
- (BOOL)deleteMeCardCache;
- (BOOL)writeMeCardCache:(id)a0;

@end
