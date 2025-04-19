@class NSURL;

@interface PPSTimestampConverter : NSObject {
    NSURL *_filepath;
    struct vector<std::pair<double, double>, std::allocator<std::pair<double, double>>> { void *__begin_; void *__end_; struct __compressed_pair<std::pair<double, double> *, std::allocator<std::pair<double, double>>> { void *__value_; } __end_cap_; } _systemOffsets;
    struct vector<std::pair<double, double>, std::allocator<std::pair<double, double>>> { void *__begin_; void *__end_; struct __compressed_pair<std::pair<double, double> *, std::allocator<std::pair<double, double>>> { void *__value_; } __end_cap_; } _timeZoneOffsets;
}

@property (readonly) struct vector<std::pair<double, double>, std::allocator<std::pair<double, double>>> { void *x0; void *x1; struct __compressed_pair<std::pair<double, double> *, std::allocator<std::pair<double, double>>> { void *x0; } x2; } systemOffsets;
@property (readonly) struct vector<std::pair<double, double>, std::allocator<std::pair<double, double>>> { void *x0; void *x1; struct __compressed_pair<std::pair<double, double> *, std::allocator<std::pair<double, double>>> { void *x0; } x2; } timeZoneOffsets;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithSubsystem:(id)a0 category:(id)a1;
- (id)initWithFilepath:(id)a0;
- (double)timeZoneOffsetForMonotonicTime:(double)a0;
- (void)_addSystemOffset:(double)a0 withMonotonicTime:(double)a1;
- (struct vector<std::pair<double, double>, std::allocator<std::pair<double, double>>> { void *x0; void *x1; struct __compressed_pair<std::pair<double, double> *, std::allocator<std::pair<double, double>>> { void *x0; } x2; })_systemOffsetsForTableName:(id)a0;
- (id)_tableNameForSystemOffset;
- (id)_tableNameForTimeZoneOffset;
- (struct vector<std::pair<double, double>, std::allocator<std::pair<double, double>>> { void *x0; void *x1; struct __compressed_pair<std::pair<double, double> *, std::allocator<std::pair<double, double>>> { void *x0; } x2; })_timeZoneOffsetsForTableName:(id)a0;
- (double)epochTimeFromMonotonicTime:(double)a0;
- (double)localTimeFromMonotonicTime:(double)a0;
- (double)monotonicTimeFromEpochTime:(double)a0;
- (double)systemOffsetFromMonotonicTime:(double)a0;

@end
