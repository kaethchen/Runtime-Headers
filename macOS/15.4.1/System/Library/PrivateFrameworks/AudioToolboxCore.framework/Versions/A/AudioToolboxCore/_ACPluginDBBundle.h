@class NSString;

@interface _ACPluginDBBundle : NSObject <NSSecureCoding> {
    NSString *mFullPath;
    double mInfoPlistModDate;
    double mRsrcModDate;
    struct AudioComponentVector { void *__begin_; void *__end_; struct __compressed_pair<std::shared_ptr<APComponent> *, std::allocator<std::shared_ptr<APComponent>>> { void *__value_; } __end_cap_; BOOL mSorted; } mBundleComponentVector;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (id)initWithPath:(id)a0 infoPlistModDate:(double)a1 rsrcModDate:(double)a2;
- (void)loadAllComponents:(void *)a0;
- (void)scanWithPriority:(int)a0 loadable:(BOOL)a1 infoPlistPath:(id)a2;

@end
