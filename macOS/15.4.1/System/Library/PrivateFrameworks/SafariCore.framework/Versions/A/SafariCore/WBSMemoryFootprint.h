@class NSArray, WBSMemoryFootprintMallocZone;

@interface WBSMemoryFootprint : NSObject <NSSecureCoding> {
    struct task_vm_info { unsigned long long virtual_size; int region_count; int page_size; unsigned long long resident_size; unsigned long long resident_size_peak; unsigned long long device; unsigned long long device_peak; unsigned long long internal; unsigned long long internal_peak; unsigned long long external; unsigned long long external_peak; unsigned long long reusable; unsigned long long reusable_peak; unsigned long long purgeable_volatile_pmap; unsigned long long purgeable_volatile_resident; unsigned long long purgeable_volatile_virtual; unsigned long long compressed; unsigned long long compressed_peak; unsigned long long compressed_lifetime; unsigned long long phys_footprint; unsigned long long min_address; unsigned long long max_address; long long ledger_phys_footprint_peak; long long ledger_purgeable_nonvolatile; long long ledger_purgeable_novolatile_compressed; long long ledger_purgeable_volatile; long long ledger_purgeable_volatile_compressed; long long ledger_tag_network_nonvolatile; long long ledger_tag_network_nonvolatile_compressed; long long ledger_tag_network_volatile; long long ledger_tag_network_volatile_compressed; long long ledger_tag_media_footprint; long long ledger_tag_media_footprint_compressed; long long ledger_tag_media_nofootprint; long long ledger_tag_media_nofootprint_compressed; long long ledger_tag_graphics_footprint; long long ledger_tag_graphics_footprint_compressed; long long ledger_tag_graphics_nofootprint; long long ledger_tag_graphics_nofootprint_compressed; long long ledger_tag_neural_footprint; long long ledger_tag_neural_footprint_compressed; long long ledger_tag_neural_nofootprint; long long ledger_tag_neural_nofootprint_compressed; unsigned long long limit_bytes_remaining; int decompressions; long long ledger_swapins; long long ledger_tag_neural_nofootprint_total; long long ledger_tag_neural_nofootprint_peak; } _vmInfo;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *zones;
@property (readonly, nonatomic) unsigned long long residentSize;
@property (readonly, nonatomic) unsigned long long dirtySize;
@property (readonly, nonatomic) WBSMemoryFootprintMallocZone *defaultMallocZone;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithError:(id *)a0;
- (id)dictionaryRepresentation;

@end
