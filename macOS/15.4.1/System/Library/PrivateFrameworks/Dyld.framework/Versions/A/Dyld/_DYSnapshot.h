@class NSArray, _DYSharedCache, _DYEnvironment;

@interface _DYSnapshot : NSObject {
    void /* unknown type, empty encoding */ $__lazy_storage_$_sharedCache;
    void /* unknown type, empty encoding */ impl;
}

@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) long long pageSize;
@property (nonatomic, readonly) NSArray *images;
@property (nonatomic, readonly) NSArray *aotImages;
@property (nonatomic, readonly) unsigned long long timestamp;
@property (nonatomic, readonly) unsigned long long initialImageCount;
@property (nonatomic, readonly) unsigned char state;
@property (nonatomic, readonly) unsigned long long platform;
@property (nonatomic, readonly) _DYEnvironment *environment;
@property (nonatomic, retain) _DYSharedCache *sharedCache;

- (id)init;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 error:(id *)a1;

@end
