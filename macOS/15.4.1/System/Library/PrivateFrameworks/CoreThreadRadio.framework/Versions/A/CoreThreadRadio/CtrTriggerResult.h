@class NSString, NSMutableArray;

@interface CtrTriggerResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long num_apple_BRs;
@property (readonly, nonatomic) long long num_thirdparty_BRs;
@property (readonly, nonatomic) long long num_thread_networks;
@property (readonly, nonatomic) long long max_simultaneous_prefix_detected;
@property (readonly, nonatomic) long long tx_total;
@property (readonly, nonatomic) long long tx_total_success;
@property (readonly, nonatomic) long long tx_success_perc;
@property (readonly, nonatomic) long long rx_total;
@property (readonly, nonatomic) long long rx_total_success;
@property (readonly, nonatomic) long long rx_success_perc;
@property (readonly, nonatomic) long long tx_delayavg;
@property (readonly, nonatomic) long long tx_delaymin;
@property (readonly, nonatomic) long long tx_delaymax;
@property (readonly, nonatomic) long long coex_tx_denied_requests_percentage;
@property (readonly, nonatomic) long long coex_rx_denied_requests_percentage;
@property (readonly, nonatomic) BOOL is_leader_thirdparty;
@property (readonly, nonatomic) NSString *last_known_device_role;
@property (readonly, nonatomic) BOOL is_partition_id_change_detected;
@property (readonly, nonatomic) NSString *leader_name;
@property (readonly, nonatomic) NSString *num_routers;
@property (readonly, nonatomic) NSString *thread_mesh_size;
@property (readonly, nonatomic) BOOL is_parent_change_detected;
@property (readonly, nonatomic) BOOL is_threaddaemon_crash_detected;
@property (readonly, nonatomic) BOOL is_threadfw_crash_detected;
@property (readonly, nonatomic) BOOL is_role_detach_disable_detected;
@property (readonly, nonatomic) BOOL is_border_router_advertised;
@property (readonly, nonatomic) long long num_border_routers_advertised;
@property (readonly, nonatomic) NSMutableArray *accessory_result;
@property (readonly, nonatomic) long long duration;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(long long)a0 num_thirdparty_BRs:(long long)a1 num_thread_networks:(long long)a2 max_simultaneous_prefixes:(long long)a3 tx_total:(long long)a4 tx_total_success:(long long)a5 tx_success_perc:(long long)a6 rx_total:(long long)a7 rx_total_success:(long long)a8 rx_success_perc:(long long)a9 tx_delayavg:(long long)a10 tx_delaymin:(long long)a11 tx_delaymax:(long long)a12 coex_tx_denied_reqs_perc:(long long)a13 coex_rx_denied_reqs_perc:(long long)a14 thirdparty_leader:(BOOL)a15 last_known_device_role:(id)a16 is_partition_id_change_detected:(BOOL)a17 leader_name:(id)a18 num_routers:(id)a19 thread_mesh_size:(id)a20 is_parent_change_detected:(BOOL)a21 is_threaddaemon_crash_detected:(BOOL)a22 is_threadfw_crash_detected:(BOOL)a23 is_role_detach_disable_detected:(BOOL)a24 is_border_router_advertised:(BOOL)a25 num_border_routers_advertised:(long long)a26 duration:(long long)a27;

@end
