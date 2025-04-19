@class NSData;

@interface ATXApp2VecMapping : NSObject {
    NSData *_data;
    struct header_s { unsigned int nvectors; unsigned int length; struct fixpt_meta_s { float base; float incr; } fixinfo; } _hdr;
    const unsigned short *_matrix;
    const unsigned short *_endOfMatrix;
    struct _CFBurstTrie { } *_idxForBundleId;
}

@property (readonly, nonatomic) unsigned long long vectorLength;
@property (readonly, nonatomic) unsigned long long appCount;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPath:(id)a0;
- (BOOL)getVectorForBundleId:(id)a0 into:(float *)a1;
- (BOOL)getVectorForBundleIdWithGenreBackup:(id)a0 into:(float *)a1;

@end
