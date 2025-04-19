@interface DiskImageParamsUDIF_XPC : DiskImageParamsXPC {
    struct unique_ptr<udif::header, std::default_delete<udif::header>> { struct __compressed_pair<udif::header *, std::default_delete<udif::header>> { struct header *__value_; } __ptr_; } _header;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (id)instanceID;
- (unsigned long long)blockSize;
- (unsigned long long)numBlocks;
- (struct unique_ptr<DiskImage, std::default_delete<DiskImage>> { struct __compressed_pair<DiskImage *, std::default_delete<DiskImage>> { struct DiskImage *x0; } x0; })createSinkDiskImage;
- (id)initWithBackendXPC:(id)a0 header:(struct unique_ptr<udif::header, std::default_delete<udif::header>> { struct __compressed_pair<udif::header *, std::default_delete<udif::header>> { struct header *x0; } x0; })a1;
- (BOOL)isWritableFormat;

@end
