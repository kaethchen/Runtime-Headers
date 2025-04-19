@interface VMUWiredMemoryInfo : NSObject {
    struct mach_zone_name { char x0[80]; } *zone_names;
    unsigned int zone_names_count;
    struct mach_zone_info_data { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; } *zone_info;
    unsigned int zone_info_count;
    struct mach_memory_info { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned short x8; unsigned short x9; unsigned short x10[2]; unsigned long long x11[3]; char x12[80]; } *wired_info;
    unsigned int wired_info_count;
    BOOL ownsMachInfo;
}

- (void)dealloc;
- (id)init;
- (BOOL)sample;
- (id)getCounterNameForSite:(unsigned long long)a0;
- (id)getTagNameForSite:(unsigned long long)a0;
- (id)initWithZoneNames:(struct mach_zone_name { char x0[80]; } *)a0 nameCount:(unsigned int)a1 zoneInfo:(struct mach_zone_info_data { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; } *)a2 zoneInfoCount:(unsigned int)a3 wiredInfo:(struct mach_memory_info { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned short x8; unsigned short x9; unsigned short x10[2]; unsigned long long x11[3]; char x12[80]; } *)a4 wiredInfoCount:(unsigned int)a5;
- (id)vmRegionInfo;
- (id)zoneInfo;
- (void)resetMachInfo;

@end
