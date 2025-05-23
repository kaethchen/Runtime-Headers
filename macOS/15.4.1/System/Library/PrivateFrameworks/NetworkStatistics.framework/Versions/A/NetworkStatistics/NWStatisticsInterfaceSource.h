@interface NWStatisticsInterfaceSource : NWStatisticsSource {
    struct nstat_ifnet_descriptor { unsigned long long threshold; unsigned int ifindex; struct nstat_ifnet_desc_link_status { unsigned int link_status_type; union { struct nstat_ifnet_desc_cellular_status { unsigned int valid_bitmask; unsigned int link_quality_metric; unsigned int ul_effective_bandwidth; unsigned int ul_max_bandwidth; unsigned int ul_min_latency; unsigned int ul_effective_latency; unsigned int ul_max_latency; unsigned int ul_retxt_level; unsigned int ul_bytes_lost; unsigned int ul_min_queue_size; unsigned int ul_avg_queue_size; unsigned int ul_max_queue_size; unsigned int dl_effective_bandwidth; unsigned int dl_max_bandwidth; unsigned int config_inactivity_time; unsigned int config_backoff_time; unsigned short mss_recommended; unsigned char reserved[2]; } cellular; struct nstat_ifnet_desc_wifi_status { unsigned int valid_bitmask; unsigned int link_quality_metric; unsigned int ul_effective_bandwidth; unsigned int ul_max_bandwidth; unsigned int ul_min_latency; unsigned int ul_effective_latency; unsigned int ul_max_latency; unsigned int ul_retxt_level; unsigned int ul_bytes_lost; unsigned int ul_error_rate; unsigned int dl_effective_bandwidth; unsigned int dl_max_bandwidth; unsigned int dl_min_latency; unsigned int dl_effective_latency; unsigned int dl_max_latency; unsigned int dl_error_rate; unsigned int config_frequency; unsigned int config_multicast_rate; unsigned int scan_count; unsigned int scan_duration; } wifi; } u; } link_status; unsigned int type; char description[128]; char name[17]; unsigned char reserved[3]; } _descriptor;
}

- (id)description;
- (int)handleDescriptor:(void *)a0 length:(unsigned long long)a1 events:(unsigned long long)a2;
- (id)_currentSnapshot;
- (id)initWithManager:(id)a0 interface:(long long)a1 threshold:(long long)a2;

@end
