#ifdef __cplusplus
extern "C" {
#endif

#ifndef _INCL_GUARD
#define _INCL_GUARD

#pragma pack(push)
#pragma pack(1)

#define NMAX_DETECT 200
struct udp_bb {
  uint8_t crit;
  float x;
  float y;
  float w;
  float h;
};
struct udp_packet {
  uint8_t n;
  struct udp_bb udp_bb_arr[NMAX_DETECT];
};
#pragma pack(pop)
void sendudp(struct udp_packet udp_p);

#endif

#ifdef __cplusplus
}
#endif