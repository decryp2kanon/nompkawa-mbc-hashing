#include "yespower-1.0.1-power2b/yespower-p2b.h"

void yespower_hash(const char *input, char *output, uint32_t len) {
    static const yespower_params_t params = {
        .version = YESPOWER_1_0_BLAKE2B,
        .N = 2048,
        .r = 32,
        .pers = "Now I am become Death, the destroyer of worlds",
        .perslen = 46
    };
    yespower_tls_p2b( (yespower_binary_t_p2b*)input, len, &params, (yespower_binary_t_p2b*)output );
}
