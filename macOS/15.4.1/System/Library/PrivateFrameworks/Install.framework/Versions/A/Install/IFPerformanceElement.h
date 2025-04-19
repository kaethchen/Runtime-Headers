@interface IFPerformanceElement : NSObject <NSCopying> {
    struct timeval { long long tv_sec; int tv_usec; } _startTime;
    double _elapsedTime;
    double _progressPart;
    double _predictedTime;
    double _actualPercent;
    unsigned int _privMRegStart;
    unsigned int _privPriRegStart;
    unsigned int _privMRegEnd;
    unsigned int _privPriRegEnd;
    unsigned long long _privateSizeStart;
    unsigned long long _totalPrivateSizeStart;
    unsigned long long _heapSizeStart;
    unsigned long long _totalHeapSizeStart;
    unsigned long long _privateSizeEnd;
    unsigned long long _totalPrivateSizeEnd;
    unsigned long long _heapSizeEnd;
    unsigned long long _totalHeapSizeEnd;
    BOOL _collectMemory;
    BOOL _didOneShot;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (struct timeval { long long x0; int x1; })startTime;
- (void)startTimer;
- (void)stopTimer;
- (id)memoryInfo;
- (unsigned long long)heapSize;
- (void)setTotalTime:(id)a0;
- (double)elapsedTime;
- (void)accumulatePerformanceWithItem:(id)a0;
- (double)actualPercent;
- (unsigned int)mallocRegions;
- (void)pingMemory;
- (double)predictedTime;
- (unsigned int)privateRegions;
- (unsigned long long)privateSize;
- (double)progressPart;
- (void)setCollectMemory:(BOOL)a0;
- (void)setProgressPart:(double)a0;
- (unsigned long long)totalHeapSize;
- (unsigned long long)totalPrivateSize;

@end
