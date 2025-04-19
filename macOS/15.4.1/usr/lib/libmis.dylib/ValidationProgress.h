@class NSLock, NSMutableDictionary;

@interface ValidationProgress : NSObject {
    NSMutableDictionary *_progressSizes;
    NSMutableDictionary *_progressPercents;
    NSLock *_lock;
}

@property (readonly, nonatomic) long long current;
@property (readonly, nonatomic) long long total;

- (id)init;
- (void).cxx_destruct;
- (void)updateProgressForURL:(id)a0 withContext:(id)a1;

@end
